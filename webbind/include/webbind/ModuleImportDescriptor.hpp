#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ModuleImportDescriptor
/// [`ModuleImportDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/ModuleImportDescriptor)
class ModuleImportDescriptor : public emlite::Val {
  explicit ModuleImportDescriptor(Handle h) noexcept;
public:
    static ModuleImportDescriptor take_ownership(Handle h) noexcept;
    explicit ModuleImportDescriptor(const emlite::Val &val) noexcept;
    ModuleImportDescriptor() noexcept;
    [[nodiscard]] ModuleImportDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String module_() const;
    void module_(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] ImportExportKind kind() const;
    void kind(const ImportExportKind& value);
};

} // namespace webbind