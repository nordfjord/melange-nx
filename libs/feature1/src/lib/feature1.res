%%raw("import './feature1.module.css';")

@react.component
let make = ()=> {
  <div>
    <h1>{"Welcome to Feature1"->React.string}</h1>
  </div>
}
