#include "librpc/gen_ndr/ndr_wbint.h"
#ifndef __SRV_WBINT__
#define __SRV_WBINT__
void _wbint_Ping(pipes_struct *p, struct wbint_Ping *r);
NTSTATUS _wbint_LookupSid(pipes_struct *p, struct wbint_LookupSid *r);
NTSTATUS _wbint_LookupName(pipes_struct *p, struct wbint_LookupName *r);
NTSTATUS _wbint_Sid2Uid(pipes_struct *p, struct wbint_Sid2Uid *r);
NTSTATUS _wbint_Sid2Gid(pipes_struct *p, struct wbint_Sid2Gid *r);
NTSTATUS _wbint_Uid2Sid(pipes_struct *p, struct wbint_Uid2Sid *r);
NTSTATUS _wbint_Gid2Sid(pipes_struct *p, struct wbint_Gid2Sid *r);
NTSTATUS _wbint_AllocateUid(pipes_struct *p, struct wbint_AllocateUid *r);
NTSTATUS _wbint_AllocateGid(pipes_struct *p, struct wbint_AllocateGid *r);
NTSTATUS _wbint_QueryUser(pipes_struct *p, struct wbint_QueryUser *r);
NTSTATUS _wbint_LookupUserAliases(pipes_struct *p, struct wbint_LookupUserAliases *r);
NTSTATUS _wbint_LookupUserGroups(pipes_struct *p, struct wbint_LookupUserGroups *r);
NTSTATUS _wbint_QuerySequenceNumber(pipes_struct *p, struct wbint_QuerySequenceNumber *r);
NTSTATUS _wbint_LookupGroupMembers(pipes_struct *p, struct wbint_LookupGroupMembers *r);
NTSTATUS _wbint_QueryUserList(pipes_struct *p, struct wbint_QueryUserList *r);
NTSTATUS _wbint_QueryGroupList(pipes_struct *p, struct wbint_QueryGroupList *r);
NTSTATUS _wbint_DsGetDcName(pipes_struct *p, struct wbint_DsGetDcName *r);
NTSTATUS _wbint_LookupRids(pipes_struct *p, struct wbint_LookupRids *r);
NTSTATUS _wbint_CheckMachineAccount(pipes_struct *p, struct wbint_CheckMachineAccount *r);
NTSTATUS _wbint_ChangeMachineAccount(pipes_struct *p, struct wbint_ChangeMachineAccount *r);
NTSTATUS _wbint_SetMapping(pipes_struct *p, struct wbint_SetMapping *r);
NTSTATUS _wbint_RemoveMapping(pipes_struct *p, struct wbint_RemoveMapping *r);
NTSTATUS _wbint_SetHWM(pipes_struct *p, struct wbint_SetHWM *r);
void wbint_get_pipe_fns(struct api_struct **fns, int *n_fns);
NTSTATUS rpc_wbint_dispatch(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const struct ndr_interface_table *table, uint32_t opnum, void *r);
void _wbint_Ping(pipes_struct *p, struct wbint_Ping *r);
NTSTATUS _wbint_LookupSid(pipes_struct *p, struct wbint_LookupSid *r);
NTSTATUS _wbint_LookupName(pipes_struct *p, struct wbint_LookupName *r);
NTSTATUS _wbint_Sid2Uid(pipes_struct *p, struct wbint_Sid2Uid *r);
NTSTATUS _wbint_Sid2Gid(pipes_struct *p, struct wbint_Sid2Gid *r);
NTSTATUS _wbint_Uid2Sid(pipes_struct *p, struct wbint_Uid2Sid *r);
NTSTATUS _wbint_Gid2Sid(pipes_struct *p, struct wbint_Gid2Sid *r);
NTSTATUS _wbint_AllocateUid(pipes_struct *p, struct wbint_AllocateUid *r);
NTSTATUS _wbint_AllocateGid(pipes_struct *p, struct wbint_AllocateGid *r);
NTSTATUS _wbint_QueryUser(pipes_struct *p, struct wbint_QueryUser *r);
NTSTATUS _wbint_LookupUserAliases(pipes_struct *p, struct wbint_LookupUserAliases *r);
NTSTATUS _wbint_LookupUserGroups(pipes_struct *p, struct wbint_LookupUserGroups *r);
NTSTATUS _wbint_QuerySequenceNumber(pipes_struct *p, struct wbint_QuerySequenceNumber *r);
NTSTATUS _wbint_LookupGroupMembers(pipes_struct *p, struct wbint_LookupGroupMembers *r);
NTSTATUS _wbint_QueryUserList(pipes_struct *p, struct wbint_QueryUserList *r);
NTSTATUS _wbint_QueryGroupList(pipes_struct *p, struct wbint_QueryGroupList *r);
NTSTATUS _wbint_DsGetDcName(pipes_struct *p, struct wbint_DsGetDcName *r);
NTSTATUS _wbint_LookupRids(pipes_struct *p, struct wbint_LookupRids *r);
NTSTATUS _wbint_CheckMachineAccount(pipes_struct *p, struct wbint_CheckMachineAccount *r);
NTSTATUS _wbint_ChangeMachineAccount(pipes_struct *p, struct wbint_ChangeMachineAccount *r);
NTSTATUS _wbint_SetMapping(pipes_struct *p, struct wbint_SetMapping *r);
NTSTATUS _wbint_RemoveMapping(pipes_struct *p, struct wbint_RemoveMapping *r);
NTSTATUS _wbint_SetHWM(pipes_struct *p, struct wbint_SetHWM *r);
NTSTATUS rpc_wbint_init(void);
#endif /* __SRV_WBINT__ */
