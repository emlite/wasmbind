#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Module;
class Instance;

/// Dictionary type WebAssemblyInstantiatedSource
class WebAssemblyInstantiatedSource : public emlite::Val {
  explicit WebAssemblyInstantiatedSource(Handle h) noexcept;
public:
    static WebAssemblyInstantiatedSource take_ownership(Handle h) noexcept;
    explicit WebAssemblyInstantiatedSource(const emlite::Val &val) noexcept;
    WebAssemblyInstantiatedSource() noexcept;
    [[nodiscard]] WebAssemblyInstantiatedSource clone() const noexcept;
    /// Getter of the `module` attribute.
    [[nodiscard]] Module module_() const;
    /// Setter of the `module` attribute.
    void module_(const Module& value);
    /// Getter of the `instance` attribute.
    [[nodiscard]] Instance instance() const;
    /// Setter of the `instance` attribute.
    void instance(const Instance& value);
};

} // namespace webbind