#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ModuleImportDescriptor
class ModuleImportDescriptor : public emlite::Val {
  explicit ModuleImportDescriptor(Handle h) noexcept;
public:
    static ModuleImportDescriptor take_ownership(Handle h) noexcept;
    explicit ModuleImportDescriptor(const emlite::Val &val) noexcept;
    ModuleImportDescriptor() noexcept;
    [[nodiscard]] ModuleImportDescriptor clone() const noexcept;
    /// Getter of the `module` attribute.
    [[nodiscard]] jsbind::String module_() const;
    /// Setter of the `module` attribute.
    void module_(const jsbind::String& value);
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