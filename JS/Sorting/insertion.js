let arr=[9,8,6,5,3,2];
for(a of arr) console.log(a)
console.log()
for(let i=1;i<arr.length;i++){
    let index = i-1;
    let key = arr[i];
    while(key<arr[index] && index >=0){
        arr[index+1]=arr[index];
        index--;
    }
    arr[index+1]=key
}
for(a of arr) console.log(a)