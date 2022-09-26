import PropTypes from "prop-types";
export const Button =({color,text,onclick}) => {
    return (
        <Button onclick={onclick} style={{backgroundColor:color}} className='btn'>{text}</Button>
    );

};
Button.defaultProps={
    color:'steelblue',
    text:'Button',
};

Button.PropTypes ={
    text: PropTypes.string,
    color:PropTypes.string,
    onclick:PropTypes.func,
}


