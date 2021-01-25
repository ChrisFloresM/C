#include <stdio.h>
#include <string.h>
#include <stdint.h>

uint8_t checksum_calc(uint8_t *, uint8_t *);
void frame_generator(uint8_t *, uint8_t *, uint8_t *, uint8_t *, uint8_t *);

int main()
{
    uint8_t frame_start[3] = {0x7E, 0x00, 0x18}; 
    uint8_t checksum_string[14] = {0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00};
    uint8_t frame[29];
    uint8_t data[10]; 
    uint8_t checksum[1];
    uint8_t i;
    float temp = 28.0;
    float HR = 68.0;
    sprintf(data,"T:%2.0fCH:%2.0fP", temp, HR);
    checksum[0] = checksum_calc(checksum_string, data);
    printf("\nChecksum: %X\n",checksum[0]);
    frame_generator(frame, frame_start, checksum_string, data, checksum);
    for(i = 0; i<28; i++)
    {
        printf("%X\t",frame[i]);
    }
    printf("\n%s",data);
    return 0;
}

uint8_t checksum_calc(uint8_t string_1[], uint8_t string_2[])
{
    uint16_t sum = 0;
    uint8_t i;
    for(i = 0; i<14; i++)
    {
        sum += string_1[i];
    } 
    for(i = 0; i<10; i++)
    {
        sum+= string_2[i];
    }
    sum &= 0xFF;
    return (uint8_t)(0xFF-sum);
}

void frame_generator(uint8_t frame[], uint8_t start[], uint8_t check_string[], uint8_t data[], uint8_t checksum[])
{
    uint8_t i;
    for (i = 0; i<3; i++)
    {
        frame[i] = start[i];
    } 
    for (i = 0; i<14; i++)
    {
        frame[i+3] = check_string[i];
    }
    for(i = 0; i<10; i++)
    {
        frame[i+17] = data[i];
    }
    frame[27] = checksum[0];
}
