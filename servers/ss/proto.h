#ifndef _SS_PROTO_H /* Michael */
#define _SS_PROTO_H /* Michael */

/* Function prototypes. */

/* main.c */
int main(int argc, char **argv);

/* store.c */
int do_publish(message *m_ptr);
int do_retrieve(message *m_ptr);
int do_retrieve_label(const message *m_ptr);
int do_subscribe(message *m_ptr);
int do_check(message *m_ptr);
int do_delete(message *m_ptr);
int do_snapshot(message *m_ptr);
int do_getsysinfo(const message *m_ptr);
int sef_cb_init_fresh(int type, sef_init_info_t *info);

int do_sema_init(int semaphore_number, int start_value);
int do_sema_down(int semaphore_number);
int do_sema_up(int semaphore_number);
int do_sema_release(int semaphore);

#endif
