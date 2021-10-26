%raw
"import './app.css';";

module HomePage = {
  [@react.component]
  let make = () =>
    <div className="app">
      <header className="flex">
        <h1> "Welcome to web!"->React.string </h1>
      </header>
      <main> <h2> "Resources & Tools"->React.string </h2> </main>
    </div>;
};

[@react.component]
let make = () => {
  let url = RescriptReactRouter.useUrl();

  switch (url.path) {
  | [] => <HomePage />
  | ["feature", "1"] => <Feature1.Feature1 />
  };
};
