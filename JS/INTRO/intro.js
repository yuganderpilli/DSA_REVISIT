let size = 6;


for(let i=0;i<size;i++){
    for(let j=0;j<(size-1-i);j++){
        process.stdout.write(" ")
    }
    for(let col=0;col<(2*i+1);col++){
        process.stdout.write("*");
    }
    console.log("")
}