import { Link, Outlet } from "react-router-dom";

export default function Home(){
    return
    (
        <>
        <nav>
            <Link to="/home">Home</Link>
            <Link to="/form">Login</Link>
        </nav>
        <Outlet/>
        </>
    )
}