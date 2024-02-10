class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int length = mountainArr.length(), peakIndex=0;
        int start=0,end=length-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid + 1)){
                start=peakIndex=mid+1;
            }
            else{
                end=mid;
            }
        }
        start=0,end=peakIndex;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid)<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        start=peakIndex,end=length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid)>target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};
