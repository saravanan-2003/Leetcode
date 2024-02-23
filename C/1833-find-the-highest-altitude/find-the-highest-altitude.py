class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        li={}
        li[0]=0
        for i in range(0,len(gain)):
            li[i+1]=li[i]+gain[i]
        gainSize=len(gain)
        i=0
        max=-100
        while(i<gainSize+1):
            if(li[i]>max):
                max=li[i]
            i+=1
        return max