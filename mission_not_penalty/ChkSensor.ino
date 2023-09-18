void chkWhite()
{
  F1 = analog(1);
  L1 = analog(5);
  R1 = analog(3);
  if (F1 >=3400)
  {
   ao();
   delay(100);
    wheel(-43, 43, 0); delay(300);
    ao();
   delay(100);
  }
  else if (L1 >=800  )
  {
    ao();
   delay(100);
    wheel(-25, -25, 50); delay(300);
    ao();
   delay(100);
  }
  else if (R1 >=900 )
  {
    ao();
   delay(100);
    wheel(25, 25, -50); delay(300);
    ao();
   delay(100);
  }
}
