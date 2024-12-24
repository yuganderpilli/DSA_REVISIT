let b = 1;
let a = new Promise((resolve,reject)=>{
     let c = setInterval((resolve,reject)=>{
        c++;
        if(c>5){
            clearInterval(c);
            resolve(c);
        }
     },2000)
     

    }).then((value)=>{
        console.log(value)
    })