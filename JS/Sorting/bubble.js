let arr=[7,5,2,34,5,6,78,12,45,1]

for(a in arr) console.log(a,arr[a])
console.log()
console.log()
console.log()
for(let i=0;i<arr.length-1;i++){
    for(let j=0;j<arr.length-i-1;j++){
        if(arr[j]>arr[j+1]){
            [arr[j],arr[j+1]]=[arr[j+1],arr[j]]
        }
    }
}


for(a in arr) console.log(a,arr[a])