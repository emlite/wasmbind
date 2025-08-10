#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ModuleExportDescriptor.hpp"
#include "ModuleImportDescriptor.hpp"

namespace webbind {

class Module;

/// Interface Module
/// [`Module`](https://developer.mozilla.org/en-US/docs/Web/API/Module)
class Module : public emlite::Val {
    explicit Module(Handle h) noexcept;
public:
    explicit Module(const emlite::Val &val) noexcept;
    static Module take_ownership(Handle h) noexcept;
    [[nodiscard]] Module clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Module(..)` constructor, creating a new Module instance
    Module(const jsbind::Any& bytes);
    /// The exports method.
    /// [`Module.exports`](https://developer.mozilla.org/en-US/docs/Web/API/Module/exports)
    static jsbind::TypedArray<ModuleExportDescriptor> exports(const Module& moduleObject);
    /// The imports method.
    /// [`Module.imports`](https://developer.mozilla.org/en-US/docs/Web/API/Module/imports)
    static jsbind::TypedArray<ModuleImportDescriptor> imports(const Module& moduleObject);
    /// The customSections method.
    /// [`Module.customSections`](https://developer.mozilla.org/en-US/docs/Web/API/Module/customSections)
    static jsbind::TypedArray<jsbind::ArrayBuffer> customSections(const Module& moduleObject, const jsbind::String& sectionName);
};

} // namespace webbind