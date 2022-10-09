import React , {useState ,useEffect}from "react";
import axios from "axios";
const Home =() => {
    const [users, setUsers] = useState([]);
    useEffect = ()=>{
        console.log("How r u? ")

    }
    return (
        <div className="container">
            <div className="py-4">
                <h1>Home page </h1>
            </div>
        </div>
    );
};

export default Home;

