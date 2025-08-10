#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "FilePickerAcceptType.hpp"

namespace webbind {

/// Dictionary type FilePickerOptions
/// [`FilePickerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FilePickerOptions)
class FilePickerOptions : public emlite::Val {
  explicit FilePickerOptions(Handle h) noexcept;
public:
    static FilePickerOptions take_ownership(Handle h) noexcept;
    explicit FilePickerOptions(const emlite::Val &val) noexcept;
    FilePickerOptions() noexcept;
    [[nodiscard]] FilePickerOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<FilePickerAcceptType> types() const;
    void types(const jsbind::TypedArray<FilePickerAcceptType>& value);
    [[nodiscard]] bool excludeAcceptAllOption() const;
    void excludeAcceptAllOption(bool value);
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::Any startIn() const;
    void startIn(const jsbind::Any& value);
};

} // namespace webbind