#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class FilePickerAcceptType;

/// Dictionary type FilePickerOptions
class FilePickerOptions : public emlite::Val {
  explicit FilePickerOptions(Handle h) noexcept;
public:
    static FilePickerOptions take_ownership(Handle h) noexcept;
    explicit FilePickerOptions(const emlite::Val &val) noexcept;
    FilePickerOptions() noexcept;
    [[nodiscard]] FilePickerOptions clone() const noexcept;
    /// Getter of the `types` attribute.
    [[nodiscard]] jsbind::TypedArray<FilePickerAcceptType> types() const;
    /// Setter of the `types` attribute.
    void types(const jsbind::TypedArray<FilePickerAcceptType>& value);
    /// Getter of the `excludeAcceptAllOption` attribute.
    [[nodiscard]] bool excludeAcceptAllOption() const;
    /// Setter of the `excludeAcceptAllOption` attribute.
    void excludeAcceptAllOption(bool value);
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `startIn` attribute.
    [[nodiscard]] jsbind::Any startIn() const;
    /// Setter of the `startIn` attribute.
    void startIn(const jsbind::Any& value);
};

} // namespace webbind