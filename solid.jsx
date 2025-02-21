export default Card;
import { render } from 'solid-js/web';

const Card = (props) => {
    return (
        <div className="card">
            <img src={props.image} alt={props.title} className="card-image" />
            <div className="card-content">
                <h2 className="card-title">{props.title}</h2>
                <p className="card-description">{props.description}</p>
                <p className="card-price">${props.price}</p>
            </div>
        </div>
    );
};

const App = () => {
    return (
        <div className="app">
            <Card
                image="https://via.placeholder.com/150"
                title="Sample Product"
                description="This is a sample product description."
                price="19.99"
            />
        </div>
    );
};

render(() => <App />, document.getElementById('root'));
