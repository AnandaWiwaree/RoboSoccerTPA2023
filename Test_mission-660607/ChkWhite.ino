void chkWhite()
{
  F1 = analog(1);
  L1 = analog(5);
  R1 = analog(3);
  if (F1 >=3000)
  {
   ao();
   delay(100);
    wheel(-43, 43, 0); delay(1000);
    ao();
   delay(100);
  }
  else if (L1 >=700  )
  {
    ao();
   delay(100);
    wheel(-25, -25, 50); delay(1000);
    ao();
   delay(100);
  }
  else if (R1 >=900 )
  {
    ao();
   delay(100);
    wheel(25, 25, -50); delay(1000);
    ao();
   delay(100);
  }
}
