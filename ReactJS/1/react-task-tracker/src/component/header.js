// import PropTypes from "prop-types";
// const Header =(props) => {
//     return( 
//     <header>
//         <h1>Hello,{props.title}</h1>
//     </header>
//     );
// };

// Header.defaultProps ={
//     title:"Task Tracker",
// };
// Header.propTypes = {
//     title:PropTypes.string.isRequired,
// };
// export default Header;

import PropTypes from "prop-types";
import "./Header.css";
const Header =(props) => {
    return( 
    <header>
        <h1 style={headingStyle}>Hello,{props.title}</h1>
        <h2 className="h2Head" >H2 heading</h2>
        <h3 id="h3Head">H3 heading </h3>
    </header>
    );
};
const headingStyle={
    color:'darkcyan',
    backgroundColor : "lightblue",
    textAlign:"center",
}

Header.defaultProps ={
    title:"Task Tracker",
};
Header.propTypes = {
    title:PropTypes.string.isRequired,
};
export default Header;
