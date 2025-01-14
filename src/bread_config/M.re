open Core;

let createElement =
    (
      ~name: string,
      ~docs: list(string)=[],
      ~seeAlso: list(string)=[],
      ~children: list(Types.mChild),
      _,
    )
    : unit => {
  ();
  Registry.Modules.add({name, children});
};
