import logo from './logo.svg';
import './App.css';
 import "../node_modules/bootstrap/dist/css/bootstrap.css"
 import Navbar from './Components/Layout/Navbar';
import Home from './Components/Pages/Home';
import About from './Components/Pages/About';
import Contact from './Components/Pages/Contact';
import  {BrowserRouter as Router,Route} from 'react-router-dom';


function App() {
  return (
    <Router>
      <div className="App">
       <Navbar/>
      <Home/>
      <About/>
      <Contact/>
      
    </div>
    </Router>
  );
}

export default App;
