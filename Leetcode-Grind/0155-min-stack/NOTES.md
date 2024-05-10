​
int getMin() {
if(st.size() == 0) return -1;
return *min_element(st.begin(), st.end());
}