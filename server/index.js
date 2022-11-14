var express=require("express");
const bodyParser = require("body-parser");
var app=express();
app.use(bodyParser.urlencoded({extended:false}));

app.get("/",(req,res)=>{
    // app.get("<h1>HIII</h1>")
     res.sendFile(__dirname+"/Pages/Home.html")

});
// app.get("/Contact",(req,res)=>{
//     res.redirect("/");

// });
app.get("/Contact",(req,res)=>{
    // app.get("<h1>HIII</h1>")
     res.sendFile(__dirname+"/Pages/Contact.html")

});
app.get("/About",(req,res)=>{
    // app.get("<h1>HIII</h1>")
     res.sendFile(__dirname+"/Pages/About.html")

});
app.get("/Vlog",(req,res)=>{
    // app.get("<h1>HIII</h1>")
     res.sendFile(__dirname+"/Pages/Vlog.html")

});
app.post("/sendvalue",(req,res)=>{
    var n1=req.body.n1;
    var n2=req.body.n2;
    var n3=Number(n1)+Number(n2);
    res.send("The sum of num is "+n3);

    
     

});




app.listen(3060);