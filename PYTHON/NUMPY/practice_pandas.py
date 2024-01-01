#!/usr/bin/env python
# coding: utf-8

# In[1]:


import pandas as pd


# In[2]:


import numpy as np


# In[9]:


dict= {
    "Name" : ['Hardik', 'Janenie', 'Manas','Aayush'],
    "Places" : ['Canada', 'Canada', 'Russia', 'USA'],
    "Packages" : ['1B','5B','1M','0.5M']
}


# In[5]:


f=pd.DataFrame(dict)


# In[14]:


f


# In[15]:


f.to_csv("hardik.csv")


# In[17]:


f.to_csv("hardik_index_false.csv", index = False)


# In[24]:


f.head(2)


# In[25]:


f.tail(1)


# In[26]:


f.describe()


# In[29]:


hardik = pd.read_csv('hardik.csv')


# In[30]:


hardik


# In[37]:


nothing = pd.read_csv('nothing.csv')


# In[38]:


nothing


# In[39]:


f.head(67)


# In[42]:


nothing.head(75)


# In[43]:


f.place


# In[44]:


f


# In[46]:


f.Places


# In[47]:


f.index=['I','II','III','IV']


# In[48]:


f


# In[55]:


type(f)


# In[56]:


type(f.Name)


# In[57]:


newdf = pd. DataFrame(np.random. rand (334,5), index=np.arange (334))


# In[58]:


newdf


# In[59]:


newdf.describe()


# In[62]:


newdf.dtypes


# In[67]:


newdf[3][1]='hardik'


# In[68]:


newdf.head()


# In[69]:


newdf.to_csv("newdf.csv")


# In[74]:


type(newdf)


# In[77]:


newdf.T #this is use to transpose the dataframe


# In[78]:


newdf


# In[79]:


newdf.head()


# In[81]:


newdf. drop (4, axis=1)#axis = 0 that means row, axis = 1 means column


# In[3]:


newdf.head()


# In[ ]:




