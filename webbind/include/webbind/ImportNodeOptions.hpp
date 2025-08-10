#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CustomElementRegistry;

/// Dictionary type ImportNodeOptions
class ImportNodeOptions : public emlite::Val {
  explicit ImportNodeOptions(Handle h) noexcept;
public:
    static ImportNodeOptions take_ownership(Handle h) noexcept;
    explicit ImportNodeOptions(const emlite::Val &val) noexcept;
    ImportNodeOptions() noexcept;
    [[nodiscard]] ImportNodeOptions clone() const noexcept;
    /// Getter of the `customElementRegistry` attribute.
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    /// Setter of the `customElementRegistry` attribute.
    void customElementRegistry(const CustomElementRegistry& value);
    /// Getter of the `selfOnly` attribute.
    [[nodiscard]] bool selfOnly() const;
    /// Setter of the `selfOnly` attribute.
    void selfOnly(bool value);
};

} // namespace webbind