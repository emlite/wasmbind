#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ModuleExportDescriptor
class ModuleExportDescriptor : public emlite::Val {
  explicit ModuleExportDescriptor(Handle h) noexcept;
public:
    static ModuleExportDescriptor take_ownership(Handle h) noexcept;
    explicit ModuleExportDescriptor(const emlite::Val &val) noexcept;
    ModuleExportDescriptor() noexcept;
    [[nodiscard]] ModuleExportDescriptor clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `kind` attribute.
    [[nodiscard]] ImportExportKind kind() const;
    /// Setter of the `kind` attribute.
    void kind(const ImportExportKind& value);
};

} // namespace webbind