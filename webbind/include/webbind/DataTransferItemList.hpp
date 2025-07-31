#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DataTransferItem;
class File;


/// The DataTransferItemList class.
/// [`DataTransferItemList`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItemList)
class DataTransferItemList : public emlite::Val {
    explicit DataTransferItemList(Handle h) noexcept;

public:
    explicit DataTransferItemList(const emlite::Val &val) noexcept;
    static DataTransferItemList take_ownership(Handle h) noexcept;

    [[nodiscard]] DataTransferItemList clone() const noexcept;
    /// Getter of the `length` attribute.
    /// [`DataTransferItemList.length`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItemList/length)
    [[nodiscard]] unsigned long length() const;
    /// The add method.
    /// [`DataTransferItemList.add`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItemList/add)
    DataTransferItem add(const File& data);
    /// The remove method.
    /// [`DataTransferItemList.remove`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItemList/remove)
    jsbind::Undefined remove(unsigned long index);
    /// The clear method.
    /// [`DataTransferItemList.clear`](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItemList/clear)
    jsbind::Undefined clear();
};

