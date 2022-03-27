/**
* conv_d - functio d
* @n: enter
* @letters: Struct
* Return: char d
*/
int conv_d(int n, va_list letters)
{
int nroDig = 0;
int auxi = n;

while (auxi > 0)
{
auxi = (auxi / 10;
nroDig++;
}
goWrite(nroDig);
return (0);

}
