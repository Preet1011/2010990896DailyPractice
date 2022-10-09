import React from 'react';
import './App.css';
 import "../node_modules/bootstrap/dist/css/bootstrap.css"
 import Navbar from './Components/Layout/Navbar';
import Home from './Components/Pages/Home';
import About from './Components/Pages/About';
import Contact from './Components/Pages/Contact';
import  {BrowserRouter as Router, Route ,Switch} from 'react-router-dom';
import NotFound from './Components/Pages/NotFound';


function App() {
  return (
    <Router>
      <div className="App">
       <Navbar/>
        <Switch>
        <Route exact path="/" component={Home} />
        <Route  exact path="/About" component={About}/>
        <Route exact path="/Contact" component={Contact} />
        <Route  component={NotFound}></Route>
        </Switch>
    </div>
    </Router>
  );
};

export default App;

