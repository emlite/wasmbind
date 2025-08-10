#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StorageAccessTypes
/// [`StorageAccessTypes`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessTypes)
class StorageAccessTypes : public emlite::Val {
  explicit StorageAccessTypes(Handle h) noexcept;
public:
    static StorageAccessTypes take_ownership(Handle h) noexcept;
    explicit StorageAccessTypes(const emlite::Val &val) noexcept;
    StorageAccessTypes() noexcept;
    [[nodiscard]] StorageAccessTypes clone() const noexcept;
    [[nodiscard]] bool all() const;
    void all(bool value);
    [[nodiscard]] bool cookies() const;
    void cookies(bool value);
    [[nodiscard]] bool sessionStorage() const;
    void sessionStorage(bool value);
    [[nodiscard]] bool localStorage() const;
    void localStorage(bool value);
    [[nodiscard]] bool indexedDB() const;
    void indexedDB(bool value);
    [[nodiscard]] bool locks() const;
    void locks(bool value);
    [[nodiscard]] bool caches() const;
    void caches(bool value);
    [[nodiscard]] bool getDirectory() const;
    void getDirectory(bool value);
    [[nodiscard]] bool estimate() const;
    void estimate(bool value);
    [[nodiscard]] bool createObjectURL() const;
    void createObjectURL(bool value);
    [[nodiscard]] bool revokeObjectURL() const;
    void revokeObjectURL(bool value);
    [[nodiscard]] bool BroadcastChannel_() const;
    void BroadcastChannel_(bool value);
    [[nodiscard]] bool SharedWorker_() const;
    void SharedWorker_(bool value);
};

} // namespace webbind