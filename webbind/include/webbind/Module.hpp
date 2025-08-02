#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ModuleExportDescriptor;
class Module;
class ModuleImportDescriptor;


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

/// The Module class.
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

