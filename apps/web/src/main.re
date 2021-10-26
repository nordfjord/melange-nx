type document; // abstract type for a document object
[@send]
external getElementById: (document, string) => Dom.element = "getElementById";
[@val] external doc: document = "document";
ReactDOM.render(<App />, doc->getElementById("root"));
