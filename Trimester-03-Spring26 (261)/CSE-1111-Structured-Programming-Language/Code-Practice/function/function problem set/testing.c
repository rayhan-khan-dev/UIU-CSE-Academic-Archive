#include <stdio.h>
#include <math.h> // sqrt() ফাংশন ব্যবহারের জন্য এটি আবশ্যিক

// ১. অ্যারের উপাদানগুলো ইনপুট নেওয়ার ফাংশন
void TakeInput(float arr[], int size)
{
    int i;
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%f", &arr[i]);
    }
}

// ২. অ্যারের গড় (Mean) বের করার ফাংশন
float CalcMean(float arr[], int size)
{
    float sum = 0.0;
    int i;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size; // গড় রিটার্ন করছে
}

// ৩. স্ট্যান্ডার্ড ডেভিয়েশন (Standard Deviation) বের করার ফাংশন
float Calc_Std_deviation(float arr[], int size)
{
    // প্রথমে CalcMean ফাংশন কল করে গড় (Mean) বের করে নিচ্ছি
    float mean = CalcMean(arr, size);
    float sum_of_squares = 0.0;
    int i;

    // প্রতিটি উপাদানের সাথে গড়ের পার্থক্যের বর্গের যোগফল বের করা
    for (i = 0; i < size; i++)
    {
        sum_of_squares += pow(arr[i] - mean, 2); // (x - M)^2 এর যোগফল
    }

    // সূত্রে বসিয়ে বর্গমূল (sqrt) করে রিটার্ন করা হচ্ছে
    return sqrt(sum_of_squares / size);
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float num_array[n];

    // ইনপুট ফাংশন কল করা হলো
    TakeInput(num_array, n);

    // স্ট্যান্ডার্ড ডেভিয়েশন ফাংশন কল করা হলো
    float std_dev = Calc_Std_deviation(num_array, n);

    // ফাইনাল আউটপুট ২ দশমিক স্থান পর্যন্ত প্রিন্ট করা (যেমন প্রশ্নে ১.৩২ দেওয়া আছে)
    printf("Standard Deviation: %.2f\n", std_dev);

    return 0;
}