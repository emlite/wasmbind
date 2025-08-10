#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Module;
class Instance;

/// Dictionary type WebAssemblyInstantiatedSource
/// [`WebAssemblyInstantiatedSource`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssemblyInstantiatedSource)
class WebAssemblyInstantiatedSource : public emlite::Val {
  explicit WebAssemblyInstantiatedSource(Handle h) noexcept;
public:
    static WebAssemblyInstantiatedSource take_ownership(Handle h) noexcept;
    explicit WebAssemblyInstantiatedSource(const emlite::Val &val) noexcept;
    WebAssemblyInstantiatedSource() noexcept;
    [[nodiscard]] WebAssemblyInstantiatedSource clone() const noexcept;
    [[nodiscard]] Module module_() const;
    void module_(const Module& value);
    [[nodiscard]] Instance instance() const;
    void instance(const Instance& value);
};

} // namespace webbind