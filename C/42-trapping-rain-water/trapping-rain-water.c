int max(int a,int b){
  return a>b?a:b;
}
int min(int a,int b){
  return a<b?a:b;
}
int trap(int* height, int heightSize){
  int lm[heightSize],rm[heightSize];
  lm[0]=height[0];
  for(int i=1;i<heightSize;i++){
    lm[i]=max(height[i],lm[i-1]);
  }
  rm[heightSize-1]=height[heightSize-1];
  for(int i=heightSize-2;i>=0;i--){
    rm[i]=max(height[i],rm[i+1]);
  }
  int res=0;
  for(int i=0;i<heightSize;i++){
    res=res+min(rm[i],lm[i])-height[i];
  }
  return res;
}