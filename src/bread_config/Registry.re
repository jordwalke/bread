module Modules = {
  type t = Core.Types.m;

  module Private = {
    let items: ref(list(t)) = ref([]);
  };

  let add = item => Private.items := [item, ...Private.items^];

  let get = () => Private.items^;
};
