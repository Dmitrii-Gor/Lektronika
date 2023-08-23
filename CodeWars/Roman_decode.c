unsigned decode_roman (const char *roman_number)
{
  char roman_arr[7] = {'I','V','X','L','C','D','M'};
  int nums_arr[7] = {1, 5, 10, 50, 100, 500, 1000};
  int current_num, result = 0, prev_num;

  for(int i = 0; roman_number[i] != '\0'; i++)
  {
    for(int j = 0; j < 7; j++)
    {
        if(roman_number[i] == roman_arr[j])
        {
            current_num = nums_arr[j];
            break;
        }
    }
    result += current_num;

    if(current_num > prev_num)
    {
      result -= 2* prev_num;
    }

    prev_num = current_num;
  }

  return result;
}
