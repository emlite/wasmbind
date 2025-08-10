#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class IDBObjectStore;
class IDBRequest;

/// Interface IDBIndex
/// [`IDBIndex`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex)
class IDBIndex : public emlite::Val {
    explicit IDBIndex(Handle h) noexcept;
public:
    explicit IDBIndex(const emlite::Val &val) noexcept;
    static IDBIndex take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBIndex clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`IDBIndex.name`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`IDBIndex.name`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/name)
    void name(const jsbind::String& value);
    /// Getter of the `objectStore` attribute.
    /// [`IDBIndex.objectStore`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/objectStore)
    [[nodiscard]] IDBObjectStore objectStore() const;
    /// Getter of the `keyPath` attribute.
    /// [`IDBIndex.keyPath`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/keyPath)
    [[nodiscard]] jsbind::Any keyPath() const;
    /// Getter of the `multiEntry` attribute.
    /// [`IDBIndex.multiEntry`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/multiEntry)
    [[nodiscard]] bool multiEntry() const;
    /// Getter of the `unique` attribute.
    /// [`IDBIndex.unique`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/unique)
    [[nodiscard]] bool unique() const;
    /// The get method.
    /// [`IDBIndex.get`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/get)
    IDBRequest get(const jsbind::Any& query);
    /// The getKey method.
    /// [`IDBIndex.getKey`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/getKey)
    IDBRequest getKey(const jsbind::Any& query);
    /// The getAll method.
    /// [`IDBIndex.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/getAll)
    IDBRequest getAll();
    /// The getAll method.
    /// [`IDBIndex.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/getAll)
    IDBRequest getAll(const jsbind::Any& query);
    /// The getAll method.
    /// [`IDBIndex.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/getAll)
    IDBRequest getAll(const jsbind::Any& query, unsigned long count);
    /// The getAllKeys method.
    /// [`IDBIndex.getAllKeys`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/getAllKeys)
    IDBRequest getAllKeys();
    /// The getAllKeys method.
    /// [`IDBIndex.getAllKeys`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/getAllKeys)
    IDBRequest getAllKeys(const jsbind::Any& query);
    /// The getAllKeys method.
    /// [`IDBIndex.getAllKeys`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/getAllKeys)
    IDBRequest getAllKeys(const jsbind::Any& query, unsigned long count);
    /// The count method.
    /// [`IDBIndex.count`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/count)
    IDBRequest count();
    /// The count method.
    /// [`IDBIndex.count`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/count)
    IDBRequest count(const jsbind::Any& query);
    /// The openCursor method.
    /// [`IDBIndex.openCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/openCursor)
    IDBRequest openCursor();
    /// The openCursor method.
    /// [`IDBIndex.openCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/openCursor)
    IDBRequest openCursor(const jsbind::Any& query);
    /// The openCursor method.
    /// [`IDBIndex.openCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/openCursor)
    IDBRequest openCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
    /// The openKeyCursor method.
    /// [`IDBIndex.openKeyCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/openKeyCursor)
    IDBRequest openKeyCursor();
    /// The openKeyCursor method.
    /// [`IDBIndex.openKeyCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/openKeyCursor)
    IDBRequest openKeyCursor(const jsbind::Any& query);
    /// The openKeyCursor method.
    /// [`IDBIndex.openKeyCursor`](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex/openKeyCursor)
    IDBRequest openKeyCursor(const jsbind::Any& query, const IDBCursorDirection& direction);
};

} // namespace webbind