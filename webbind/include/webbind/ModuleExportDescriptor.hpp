#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ModuleExportDescriptor
/// [`ModuleExportDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/ModuleExportDescriptor)
class ModuleExportDescriptor : public emlite::Val {
  explicit ModuleExportDescriptor(Handle h) noexcept;
public:
    static ModuleExportDescriptor take_ownership(Handle h) noexcept;
    explicit ModuleExportDescriptor(const emlite::Val &val) noexcept;
    ModuleExportDescriptor() noexcept;
    [[nodiscard]] ModuleExportDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] ImportExportKind kind() const;
    void kind(const ImportExportKind& value);
};

} // namespace webbind