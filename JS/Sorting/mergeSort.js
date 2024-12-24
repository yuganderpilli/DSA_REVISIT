let arr=[9,8,7,6,5,4,3,2,1];

function merge(arr,start,mid,end){
let i=start;
let j = mid+1;
let sample=[]
while(i<=mid && j<=end){
    if(arr[i]<=arr[j]){
        sample.push(arr[i])
        i++;
    }else{
        sample.push(arr[j])
        j++;
    }
}
while(i<=mid){
    sample.push(arr[i])
    i++;
}
while(j<=end)
{
    sample.push(arr[j])
    j++;
}
for(let a = 0;a<sample.length;a++){
    arr[start+a]=sample[a]
}


}
function mergeSort(arr,start,end){
if(start>=end){
    return
}
let mid = Math.floor(start+((end-start)/2))
mergeSort(arr,start,mid)
mergeSort(arr,mid+1,end)
merge(arr,start,mid,end)


}
mergeSort(arr,0,arr.length-1)

for(a of arr){
    process.stdout.write(`${a} `)
}