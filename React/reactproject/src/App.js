import React from 'react';
import './App.css';
 import "../node_modules/bootstrap/dist/css/bootstrap.css"
 import Navbar from './Components/Layout/Navbar';
import Home from './Components/Pages/Home';
import About from './Components/Pages/About';
import Contact from './Components/Pages/Contact';
import  {BrowserRouter as Router, Route ,Routes} from 'react-router-dom';
import NotFound from './Components/Pages/NotFound';
import Adduser from './Components/Users/Adduser';


function App() {
  return (
    <Router>
      <div className="App">
       <Navbar/>
        <Routes>
        <Route exact path="/" component={Home} />
        <Route  exact path="/About" component={About}/>
        <Route exact path="/Contact" component={Contact} />
        <Route  component={NotFound}></Route>
        <Route exact path ="/users/add" componet={Adduser}/>
        </Routes>
    </div>
    </Router>
  );
};

export default App;

