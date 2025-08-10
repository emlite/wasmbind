#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "FilePickerOptions.hpp"

namespace webbind {

/// Dictionary type OpenFilePickerOptions
/// [`OpenFilePickerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/OpenFilePickerOptions)
class OpenFilePickerOptions : public FilePickerOptions {
  explicit OpenFilePickerOptions(Handle h) noexcept;
public:
    static OpenFilePickerOptions take_ownership(Handle h) noexcept;
    explicit OpenFilePickerOptions(const emlite::Val &val) noexcept;
    OpenFilePickerOptions() noexcept;
    [[nodiscard]] OpenFilePickerOptions clone() const noexcept;
    [[nodiscard]] bool multiple() const;
    void multiple(bool value);
};

} // namespace webbind