/**
 * This file is generated. Do not modify it manually.
 *
 * To update this file:
 *   - Modify relevant files in: src/bread_config
 *   - Run: esy gen
 *
 * @generated
 */;

module Caml = {
  module Array = Array;
  module List = List;
  module String = String;
};

module CamlArray = {
  
  /**
isEmpty(array)

returns whether $1 is empty
   */
  let isEmpty = (array) => {
    Caml.Array.length(array) === 0
  };
  
};

module CamlList = {
  
  /**
isEmpty(list)

returns whether $1 is empty
   */
  let isEmpty = (list) => {
    switch (list) {
    | [] => true
    | _ => false
    }
  };
  
};

module Option = {
  
  /**
isNone(option)

returns whether $1 is None
   */
  let isNone = (option) => {
    switch (option) {
    | Some(_) => false
    | None => true
    }
  };
  
  /**
isSome(option)

returns whether $1 is Some
   */
  let isSome = (option) => {
    switch (option) {
    | Some(_) => true
    | None => false
    }
  };
  
  /**
makeNone(_value)

ignores $1 and always returns None
   */
  let makeNone = (_value) => {
    None
  };
  
  /**
makeSome(value)

returns Some($1)
   */
  let makeSome = (value) => {
    Some(value)
  };
  
  /**
get(default, option)

returns the value contained within $2 if it exists; otherwise, returns $1
   */
  let get = (default, option) => {
    switch (option) {
    | Some(option) => option
    | None => default
    }
  };
  
  /**
getExn(option)

returns the value contained within $1 if it exists; otherwise, raises exception
   */
  let getExn = (option) => {
    switch (option) {
    | Some(option) => option
    | None => failwith("Unexpected None")
    }
  };
  
  /**
getLazy(defaultFn, option)

returns the value contained within $2 if it exists; otherwise, returns the result of calling $1
   */
  let getLazy = (defaultFn, option) => {
    switch (option) {
    | Some(option) => option
    | None => defaultFn()
    }
  };
  
  /**
filterKeep(testFn, option)

keeps the value and option unchanged if $1 is true when called with $2's value; otherwise, returns None
   */
  let filterKeep = (testFn, option) => {
    switch (option) {
    | Some(value) when testFn(value) => option
    | _ => None
    }
  };
  
  /**
filterDrop(testFn, option)

drops the value and returns None if $1 is true when called with $2's value; otherwise, returns $2 unchanged
   */
  let filterDrop = (testFn, option) => {
    switch (option) {
    | Some(value) when testFn(value) => option
    | _ => None
    }
  };
  
  /**
map(fn, option)

changes value of an option according to $1 if all inputs are Some value
   */
  let map = (fn, option) => {
    switch (option) {
    | (Some(option)) =>
      Some(fn(option))
    | _ => None
    }
  };
  
  /**
map2(fn, option1, option2)

changes value of an option according to $1 if all inputs are Some value
   */
  let map2 = (fn, option1, option2) => {
    switch (option1, option2) {
    | (Some(option1), Some(option2)) =>
      Some(fn(option1, option2))
    | _ => None
    }
  };
  
  /**
map3(fn, option1, option2, option3)

changes value of an option according to $1 if all inputs are Some value
   */
  let map3 = (fn, option1, option2, option3) => {
    switch (option1, option2, option3) {
    | (Some(option1), Some(option2), Some(option3)) =>
      Some(fn(option1, option2, option3))
    | _ => None
    }
  };
  
  /**
map4(fn, option1, option2, option3, option4)

changes value of an option according to $1 if all inputs are Some value
   */
  let map4 = (fn, option1, option2, option3, option4) => {
    switch (option1, option2, option3, option4) {
    | (Some(option1), Some(option2), Some(option3), Some(option4)) =>
      Some(fn(option1, option2, option3, option4))
    | _ => None
    }
  };
  
  /**
map5(fn, option1, option2, option3, option4, option5)

changes value of an option according to $1 if all inputs are Some value
   */
  let map5 = (fn, option1, option2, option3, option4, option5) => {
    switch (option1, option2, option3, option4, option5) {
    | (Some(option1), Some(option2), Some(option3), Some(option4), Some(option5)) =>
      Some(fn(option1, option2, option3, option4, option5))
    | _ => None
    }
  };
  
  /**
flatMap(fn, option)

changes value of an option according to $1 if all inputs are Some value
   */
  let flatMap = (fn, option) => {
    switch (option) {
    | (Some(option)) =>
      fn(option)
    | _ => None
    }
  };
  
  /**
flatMap2(fn, option1, option2)

changes value of an option according to $1 if all inputs are Some value
   */
  let flatMap2 = (fn, option1, option2) => {
    switch (option1, option2) {
    | (Some(option1), Some(option2)) =>
      fn(option1, option2)
    | _ => None
    }
  };
  
  /**
flatMap3(fn, option1, option2, option3)

changes value of an option according to $1 if all inputs are Some value
   */
  let flatMap3 = (fn, option1, option2, option3) => {
    switch (option1, option2, option3) {
    | (Some(option1), Some(option2), Some(option3)) =>
      fn(option1, option2, option3)
    | _ => None
    }
  };
  
  /**
flatMap4(fn, option1, option2, option3, option4)

changes value of an option according to $1 if all inputs are Some value
   */
  let flatMap4 = (fn, option1, option2, option3, option4) => {
    switch (option1, option2, option3, option4) {
    | (Some(option1), Some(option2), Some(option3), Some(option4)) =>
      fn(option1, option2, option3, option4)
    | _ => None
    }
  };
  
  /**
flatMap5(fn, option1, option2, option3, option4, option5)

changes value of an option according to $1 if all inputs are Some value
   */
  let flatMap5 = (fn, option1, option2, option3, option4, option5) => {
    switch (option1, option2, option3, option4, option5) {
    | (Some(option1), Some(option2), Some(option3), Some(option4), Some(option5)) =>
      fn(option1, option2, option3, option4, option5)
    | _ => None
    }
  };
  
};

module Result = {
  
  /**
isOk(result)

returns whether $1 is Ok
   */
  let isOk = (result) => {
    switch (result) {
    | Ok(_) => true
    | Error(_) => false
    }
  };
  
  /**
isError(result)

returns whether $1 is Error
   */
  let isError = (result) => {
    switch (result) {
    | Ok(_) => false
    | Error(_) => true
    }
  };
  
};

