#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
void readfromfile(char file_convert[],float elements[], int &entries)
{
    ifstream conversion (file_convert);
    conversion>>entries;
    for (int i = 0; i < entries; i++)
    {
        /* code */
        conversion>>elements[i];
    }
    return;
}

// void showing (int no_of, float arr[])
// {
//     for (int i = 0; i < no_of; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// I used Ctrl + / to commet these lines :)

void printing(float flee[], int n)
{
    cout<<"Bucket Sort: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<flee[i]<<" ";
    }
    cout<<endl; 
    return;
}

void bucket_sort(float flee[],int n)
{
    // creating bucket sort and initialize them to zero
    float bucket[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        bucket[i]=0;
    }
    // now storing them according to their indexes and assign each element according to indexing and multiplying them
    // to set them accoring to their bucket.
    for (int i = 0; i < n; i++)
    {
        /* code */
        int index = n*flee[i];
        bucket[index]=flee[i];
    }
    // sorting them with sort function and storing sorted elements to buckets.
    sort(bucket,bucket + n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        flee[i]=bucket[i];
    }
    return;
}

int main()
{
    int count; float storing[100];
    float flee[]={0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    char filename[12]={"f.txt"};
    readfromfile(filename,storing,count);
    showing(count,storing);
    // Bucket sort function calling area
    bucket_sort(flee,count);
    printing(storing,count);
    system("pause");
    return 0;
}