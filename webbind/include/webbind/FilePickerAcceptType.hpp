#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FilePickerAcceptType
/// [`FilePickerAcceptType`](https://developer.mozilla.org/en-US/docs/Web/API/FilePickerAcceptType)
class FilePickerAcceptType : public emlite::Val {
  explicit FilePickerAcceptType(Handle h) noexcept;
public:
    static FilePickerAcceptType take_ownership(Handle h) noexcept;
    explicit FilePickerAcceptType(const emlite::Val &val) noexcept;
    FilePickerAcceptType() noexcept;
    [[nodiscard]] FilePickerAcceptType clone() const noexcept;
    [[nodiscard]] jsbind::String description() const;
    void description(const jsbind::String& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> accept() const;
    void accept(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

} // namespace webbind