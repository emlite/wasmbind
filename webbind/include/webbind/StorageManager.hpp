#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StorageEstimate.hpp"

namespace webbind {

class FileSystemDirectoryHandle;

/// Interface StorageManager
/// [`StorageManager`](https://developer.mozilla.org/en-US/docs/Web/API/StorageManager)
class StorageManager : public emlite::Val {
    explicit StorageManager(Handle h) noexcept;
public:
    explicit StorageManager(const emlite::Val &val) noexcept;
    static StorageManager take_ownership(Handle h) noexcept;
    [[nodiscard]] StorageManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The persisted method.
    /// [`StorageManager.persisted`](https://developer.mozilla.org/en-US/docs/Web/API/StorageManager/persisted)
    jsbind::Promise<bool> persisted();
    /// The persist method.
    /// [`StorageManager.persist`](https://developer.mozilla.org/en-US/docs/Web/API/StorageManager/persist)
    jsbind::Promise<bool> persist();
    /// The estimate method.
    /// [`StorageManager.estimate`](https://developer.mozilla.org/en-US/docs/Web/API/StorageManager/estimate)
    jsbind::Promise<StorageEstimate> estimate();
    /// The getDirectory method.
    /// [`StorageManager.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/StorageManager/getDirectory)
    jsbind::Promise<FileSystemDirectoryHandle> getDirectory();
};

} // namespace webbind