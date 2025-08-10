#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DataTransferItemList;
class Element;
class FileList;

/// Interface DataTransfer
/// [`DataTransfer`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer)
class DataTransfer : public emlite::Val {
    explicit DataTransfer(Handle h) noexcept;
public:
    explicit DataTransfer(const emlite::Val &val) noexcept;
    static DataTransfer take_ownership(Handle h) noexcept;
    [[nodiscard]] DataTransfer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DataTransfer(..)` constructor, creating a new DataTransfer instance
    DataTransfer();
    /// Getter of the `dropEffect` attribute.
    /// [`DataTransfer.dropEffect`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/dropEffect)
    [[nodiscard]] jsbind::String dropEffect() const;
    /// Setter of the `dropEffect` attribute.
    /// [`DataTransfer.dropEffect`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/dropEffect)
    void dropEffect(const jsbind::String& value);
    /// Getter of the `effectAllowed` attribute.
    /// [`DataTransfer.effectAllowed`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/effectAllowed)
    [[nodiscard]] jsbind::String effectAllowed() const;
    /// Setter of the `effectAllowed` attribute.
    /// [`DataTransfer.effectAllowed`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/effectAllowed)
    void effectAllowed(const jsbind::String& value);
    /// Getter of the `items` attribute.
    /// [`DataTransfer.items`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/items)
    [[nodiscard]] DataTransferItemList items() const;
    /// The setDragImage method.
    /// [`DataTransfer.setDragImage`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/setDragImage)
    jsbind::Undefined setDragImage(const Element& image, long x, long y);
    /// Getter of the `types` attribute.
    /// [`DataTransfer.types`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/types)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    /// The getData method.
    /// [`DataTransfer.getData`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/getData)
    jsbind::String getData(const jsbind::String& format);
    /// The setData method.
    /// [`DataTransfer.setData`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/setData)
    jsbind::Undefined setData(const jsbind::String& format, const jsbind::String& data);
    /// The clearData method.
    /// [`DataTransfer.clearData`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/clearData)
    jsbind::Undefined clearData();
    /// The clearData method.
    /// [`DataTransfer.clearData`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/clearData)
    jsbind::Undefined clearData(const jsbind::String& format);
    /// Getter of the `files` attribute.
    /// [`DataTransfer.files`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer/files)
    [[nodiscard]] FileList files() const;
};

} // namespace webbind