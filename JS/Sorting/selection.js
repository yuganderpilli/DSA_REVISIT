let sample=[7,5,2,4,6,7,8,2,34,7];
for(let i=0;i<sample.length;i++){
    let min = i;
    for(let j=i;j<sample.length;j++){
        if(sample[j]<sample[min]){
            min=j;
        }
        [sample[i],sample[min]]=[sample[min],sample[i]]
    }

}

for(a of sample){
    process.stdout.write(`${a} `)
}