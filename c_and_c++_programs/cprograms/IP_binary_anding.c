#include <stdio.h>
#include <string.h>

int main()
{
    char IP[36];
    char netid[36];
    char hostid[36];

    printf("enter IP address in binary format\n");
    scanf("%s", IP);
    printf("you enterd = %s\n", IP);
    
   /* for(int i = 0; i<36; i++)
    {
        if(IP[i] == '.')
        {
            iip[i] = '.';
        }
        else
        {
            iip[i] = (IP[i] - 48);
        }
        
    }*/
    
    if(IP[0] == '0')
    {
        printf("class = A\n");
        char subnet[36] = "11111111.00000000.00000000.00000000";
       
        for(int j= 0; j<36; j++)
        {
            if(subnet[j] == '.')
            {
                netid[j] = '.';
            }
            else
            {
                netid[j] = 48 + ((subnet[j] - 48) & (IP[j] - 48));
            }
            
        }
        
        printf("Network Id = %s\n", netid);

        for(int i = 0; i<36; i++)
        {
            if(subnet[i] == '.')
            {
                hostid[i] = '.';
            }
            else
            {
                hostid[i] = 48 + ((IP[i] - 48) | (subnet[i] - 48));
            }
        }

        printf("Host Id = %s\n", hostid);
    }


    if((IP[0] == '1') && (IP[1] == '0'))
    {
        printf("class = B\n");
        char subnet[36] = "11111111.11111111.00000000.00000000";
       
        for(int j= 0; j<36; j++)
        {
            if(subnet[j] == '.')
            {
                netid[j] = '.';
            }
            else
            {
                netid[j] = 48 + ((subnet[j] - 48) & (IP[j] - 48));
            }
            
        }
        
        printf("Network Id = %s\n", netid);

        for(int i = 0; i<36; i++)
        {
            if(subnet[i] == '.')
            {
                hostid[i] = '.';
            }
            else
            {
                hostid[i] = 48 + ((IP[i] - 48) | (subnet[i] - 48));
            }
        }

        printf("Host Id = %s\n", hostid);
    }

    if((IP[0] == '1') && (IP[1] == '1') && (IP[2] == '0'))
    {
        printf("class = C\n");
        char subnet[36] = "11111111.11111111.11111111.00000000";
       
        for(int j= 0; j<36; j++)
        {
            if(subnet[j] == '.')
            {
                netid[j] = '.';
            }
            else
            {
                netid[j] = 48 + ((subnet[j] - 48) & (IP[j] - 48));
            }
            
        }
        
        printf("Network Id = %s\n", netid);

        for(int i = 0; i<36; i++)
        {
            if(subnet[i] == '.')
            {
                hostid[i] = '.';
            }
            else
            {
                hostid[i] = 48 + ((IP[i] - 48) | (subnet[i] - 48));
            }
        }

        printf("Host Id = %s\n", hostid);
    }

    if((IP[0] == '1') && (IP[1] == '1') && (IP[2] == '1') && (IP[3] == '0'))
    {
        printf("class = D\n");
        printf("ther is no net id or host id for class D\n");
        
    }

    if((IP[0] == '1') && (IP[1] == '1') && (IP[2] == '1') && (IP[3] == '1'))
    {
        printf("class = E\n");
        printf("ther is no net id or host id for class E\n");
        
    }

    return 0;
}